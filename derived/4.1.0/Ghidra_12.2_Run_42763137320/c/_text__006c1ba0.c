/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1ba0; name: FUN_.text__006c1ba0
 */


void FUN__text__006c1ba0(float param_1,float param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *param_3;
  fVar4 = param_1;
  if (param_1 <= fVar5) {
    fVar4 = fVar5;
  }
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (param_1 <= fVar5) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar4) && !NAN(param_2)) {
      bVar1 = fVar4 < param_2;
      bVar2 = fVar4 == param_2;
      bVar3 = false;
    }
  }
  if (!bVar2 && bVar1 == bVar3) {
    if (fVar4 <= param_2) {
      param_2 = fVar4;
    }
    *param_3 = param_2;
  }
  return;
}


