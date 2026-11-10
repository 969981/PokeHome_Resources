/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00630120; name: FUN_.text__00630120
 */


uint FUN__text__00630120(undefined8 param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  void *__src;
  uint uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 auStack_2f6 [662];
  undefined1 auStack_60 [16];
  
  FUN__text__0060e76c(auStack_60,param_1);
  lVar5 = FUN__text__0060e7e4(auStack_60);
  __src = (void *)FUN__text__0060e7ec(auStack_60);
  uVar1 = *(ushort *)(lVar5 + 0xe);
  memcpy(auStack_2f6,__src,(ulong)uVar1);
  uVar4 = (uVar1 >> 2) / 0x19;
  uVar2 = (uint)uVar1 + uVar4 * -100;
  if ((ulong)uVar1 < 100) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    puVar7 = auStack_2f6;
    uVar3 = uVar4;
    if (uVar4 < 2) {
      uVar3 = 1;
    }
    uVar8 = (ulong)uVar3;
    do {
      uVar3 = FUN__text__005964e0(puVar7,100);
      uVar6 = uVar3 ^ uVar6;
      puVar7 = puVar7 + 100;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if ((uVar2 & 0xffff) != 0) {
    uVar4 = FUN__text__005964e0(auStack_2f6 + uVar4 * 100,uVar2 & 0xffff);
    uVar6 = uVar4 ^ uVar6;
  }
  FUN__text__0060e79c(auStack_60);
  return uVar6;
}


