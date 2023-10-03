# Quadratic Characteristic Roots

## Definition

Given a relation recurrence defined by 𝑆(𝑘) + 𝑎𝑆(𝑘-𝟷) + 𝑏𝑆(𝑘-𝟸) = 𝟶, if the characteristic equation 𝑥<sup>𝟸</sup> + 𝑎𝑥 + 𝑏 = 𝟶 has
- two distinct roots 𝑥<sub>𝟷</sub> and 𝑥<sub>𝟸</sub>, then 𝑆(𝑘) = 𝑐𝑥<sub>𝟷</sub><sup>𝑘</sup> + 𝑑𝑥<sub>𝟸</sub><sup>𝑘</sup>
- one root 𝑥, then 𝑆(𝑘) = (𝑐 + 𝑑𝑘)𝑥<sup>𝑘</sup>

where 𝑐 and 𝑑 are constants determined by the initial conditions.

## Examples

### Solve the recurrence relation 𝑆(𝑘) - 𝟽𝑆(𝑘-𝟷) + 𝟷𝟶𝑆(𝑘-𝟸) = 𝟶 with 𝑆(𝟶) = 𝟸, 𝑆(𝟷) = 𝟹

Since the characteristic equation 𝑥<sup>𝟸</sup> -𝟽𝑥 + 𝟷𝟶 = 𝟶 has two distinct roots 𝑥<sub>𝟷</sub> = 𝟻 and 𝑥<sub>𝟸</sub> = 𝟸, 𝑆(𝑘) = 𝑐𝟻<sup>𝑘</sup> + 𝑑𝟸<sup>𝑘</sup> (1).<br>
Substituting 𝑆(𝟶) and 𝑆(𝟷) into (1), we have 𝑐 + 𝑑 = 𝟸 and 𝟻𝑐 + 𝟸𝑑 = 𝟹<br>
⇒ 𝑐 = -𝟷/𝟹 and 𝑑 = 𝟽/𝟹.<br>
Therefore, 𝑆(𝑘) = 𝟽(𝟸)<sup>𝑘</sup>/𝟹 - 𝟻<sup>𝑘</sup>/𝟹.

### Solve the recurrence relation 𝑆(𝑘) - 𝟼𝑆(𝑘-𝟷) + 𝟿𝑆(𝑘-𝟸) = 𝟶 with 𝑆(𝟶) = 𝟷, 𝑆(𝟷) = 𝟺

Since the characteristic equation 𝑥<sup>𝟸</sup> -𝟼𝑥 + 𝟿 = (𝑥 - 𝟹)<sup>𝟸</sup> = 𝟶 has one root 𝑥 = 𝟹, 𝑆(𝑘) = (𝑐 + 𝑑𝑘)𝟹<sup>𝑘</sup> (1).<br>
Substituting 𝑆(𝟶) and 𝑆(𝟷) into (1), we have 𝑐 = 𝟷 and (𝟷 + 𝑑)𝟹 = 𝟺<br>
⇒ 𝑑 = 𝟷/𝟹<br>
Therefore, 𝑆(𝑘) = (𝟷 + 𝑘/𝟹)𝟹<sup>𝑘</sup>.