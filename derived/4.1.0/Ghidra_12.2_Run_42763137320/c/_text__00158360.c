/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00158360; name: FUN_.text__00158360
 */


uint FUN__text__00158360(long param_1,undefined2 *param_2)

{
  void *__s;
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN__text__00157130(*param_2,1);
  __s = (void *)(param_1 + 0xc0c);
  memset(__s,0,0x400);
  FUN__text__005f3460(__s,param_2 + (uVar2 & 1),0x400);
  lVar3 = 0;
  do {
    if (*(short *)((long)__s + lVar3) == 0) break;
    uVar2 = FUN__text__00157130(*(short *)((long)__s + lVar3),1);
    if ((uVar2 & 1) != 0) {
      *(undefined2 *)((long)__s + lVar3) = 0;
    }
    lVar3 = lVar3 + 2;
  } while (lVar3 != 0x800);
  uVar2 = FUN__text__005f3560(0x724608,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x7246fe,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x724712,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x724728,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x72466c,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x7246dc,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x72473a,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x724640,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x72462a,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x7245f8,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x724656,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x7246ec,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x724682,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x724694,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x7246ba,__s);
  if ((uVar2 & 1) != 0) {
    return 2;
  }
  uVar2 = FUN__text__005f3560(0x7246a6,__s);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN__text__005f3560(0x72474e,__s);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN__text__005f3560(0x7246ce,__s);
    return uVar1 & 1;
  }
  return 1;
}


