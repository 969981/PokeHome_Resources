/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cbee4; name: FUN_.text__004cbee4
 */


undefined8 FUN__text__004cbee4(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *__src;
  ulong uVar6;
  size_t __n;
  
  lVar1 = param_2 + (ulong)(uint)(*(int *)(param_2 + 5) * 5);
  uVar2 = *(uint *)(lVar1 + 9);
  *(ushort *)(param_1 + 0x28) = (ushort)*(byte *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(lVar1 + 0xd);
  uVar4 = FUN__text__004cc1ac(param_1 + 0x18,lVar1 + 0xe,(ulong)uVar2);
  if ((int)uVar4 != 1) {
    return uVar4;
  }
  pbVar5 = (byte *)(lVar1 + 0xe + (ulong)uVar2);
  __src = pbVar5 + 1;
  bVar3 = *pbVar5;
  uVar6 = (ulong)bVar3;
  if (bVar3 == 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB__text__004cbfac;
    FUN__text__00400fc0(1);
    pbVar5 = (byte *)0x0;
  }
  else {
    __n = uVar6 * 4;
    lVar1 = (uVar6 & 0xfc) + 4;
    pbVar5 = (byte *)FUN__text__00400fa0(1,*(undefined8 *)(param_1 + 0x30),lVar1 + __n);
    if (pbVar5 == (byte *)0x0) {
      return 0x34;
    }
    *pbVar5 = bVar3;
    memcpy(pbVar5 + 1,__src,uVar6);
    memcpy(pbVar5 + lVar1,__src + uVar6,__n);
    __src = __src + uVar6 + __n;
  }
  *(byte **)(param_1 + 0x30) = pbVar5;
LAB__text__004cbfac:
  bVar3 = *__src;
  uVar6 = (ulong)bVar3;
  if (bVar3 == 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      return 1;
    }
    FUN__text__00400fc0(1);
    pbVar5 = (byte *)0x0;
  }
  else {
    lVar1 = (uVar6 & 0xfc) + 4;
    pbVar5 = (byte *)FUN__text__00400fa0(1,*(undefined8 *)(param_1 + 0x38),lVar1 + uVar6 * 8);
    if (pbVar5 == (byte *)0x0) {
      return 0x34;
    }
    *pbVar5 = bVar3;
    memcpy(pbVar5 + 1,__src + 1,uVar6);
    memcpy(pbVar5 + lVar1,__src + 1 + uVar6,uVar6 * 8);
  }
  *(byte **)(param_1 + 0x38) = pbVar5;
  return 1;
}


