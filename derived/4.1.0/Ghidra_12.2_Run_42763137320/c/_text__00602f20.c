/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602f20; name: FUN_.text__00602f20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__00602f20(uint *param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = FUN__text__0063e224(param_2,1);
  uVar3 = 0;
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN__text__0063e224(param_2,0x12);
  }
  else {
    uVar3 = 2;
    *param_1 = 2;
    uVar2 = FUN__text__0063e224(param_2,0x12);
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN__text__0063e224(param_2,7);
  }
  else {
    uVar3 = uVar3 | 0x40000;
    *param_1 = uVar3;
    uVar2 = FUN__text__0063e224(param_2,7);
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN__text__0063e224(param_2,0x21);
  }
  else {
    uVar3 = uVar3 | 0x80;
    *param_1 = uVar3;
    uVar2 = FUN__text__0063e224(param_2,0x21);
  }
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
    uVar2 = FUN__text__0063e224(param_2,0x22);
  }
  else {
    uVar4 = 2;
    param_1[1] = 2;
    uVar2 = FUN__text__0063e224(param_2,0x22);
  }
  if ((uVar2 & 1) != 0) {
    uVar4 = uVar4 | 4;
    param_1[1] = uVar4;
  }
  uVar2 = FUN__text__0063e224(param_2,0x16);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN__text__0063e224(param_2,0x19);
  }
  else {
    uVar3 = uVar3 | 0x400000;
    *param_1 = uVar3;
    uVar2 = FUN__text__0063e224(param_2,0x19);
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN__text__0063e224(param_2,0x17);
  }
  else {
    uVar3 = uVar3 | 0x2000000;
    *param_1 = uVar3;
    uVar2 = FUN__text__0063e224(param_2,0x17);
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN__text__0063e224(param_2,0x18);
  }
  else {
    uVar3 = uVar3 | 0x800000;
    *param_1 = uVar3;
    uVar2 = FUN__text__0063e224(param_2,0x18);
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN__text__0063e224(param_2,0x23);
  }
  else {
    *param_1 = uVar3 | 0x1000000;
    uVar2 = FUN__text__0063e224(param_2,0x23);
  }
  if ((uVar2 & 1) == 0) {
    cVar1 = FUN__text__0063e2e8(param_2);
  }
  else {
    uVar4 = uVar4 | 8;
    param_1[1] = uVar4;
    cVar1 = FUN__text__0063e2e8(param_2);
  }
  if (cVar1 != '\0') {
    uVar4 = uVar4 | 0x20;
    *(char *)(param_1 + 4) = cVar1;
    param_1[1] = uVar4;
  }
  cVar1 = FUN__text__0063e318(param_2);
  if (cVar1 != '\0') {
    *(char *)((long)param_1 + 0x11) = cVar1;
    param_1[1] = uVar4 | 0x40;
  }
  return;
}


