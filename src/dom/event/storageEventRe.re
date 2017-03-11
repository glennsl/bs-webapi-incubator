type t = DomTypesRe.storageEvent;
type domStorage; /* sessionStorage or localStorage, TODO: Integrate with existing storage API */

include EventRe.Impl { type nonrec t = t };

external make : string => t = "StorageEvent" [@@bs.new];
external makeWithOptions : string => Js.t {..} => t = "StorageEvent" [@@bs.new];

external key : t => string = "" [@@bs.get];
external newValue : t => string = "" [@@bs.get];
external oldValue : t => string = "" [@@bs.get];
external storageArea : t => domStorage = "" [@@bs.get];
external url : t => string = "" [@@bs.get];
