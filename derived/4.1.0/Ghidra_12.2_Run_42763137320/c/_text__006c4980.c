/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c4980; name: FUN_.text__006c4980
 */


void FUN__text__006c4980(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  cVar3 = *(char *)(param_1 + 0x109);
  if ('\0' < cVar3) {
    lVar5 = 0;
    lVar6 = 8;
    do {
      lVar7 = *(long *)(param_1 + 0x110);
      lVar4 = *(long *)(lVar7 + lVar6);
      if ((*(byte *)(lVar4 + 0x14) & 3) != 0) {
        uVar1 = FUN__text__0069de6c(param_2,*(undefined8 *)(lVar4 + 0x20),
                                    *(undefined2 *)(lVar4 + 0x4a));
        if ((uVar1 & 1) != 0) {
          FUN__text__006b0fdc(lVar4,param_3);
        }
        FUN__text__0069de50(param_2,param_3);
        FUN__text__006b09e8(*(undefined8 *)(lVar7 + lVar6),param_3,param_2);
        FUN__text__006af484(*(undefined8 *)(lVar7 + lVar6),param_2,param_3);
        if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
          uVar2 = FUN__text__006d5724(*(undefined8 *)(param_2 + 0xb8),1);
          FUN__text__006d6610(param_3,param_2,uVar2);
        }
        FUN__text__0069dbb0(param_3,param_2);
        cVar3 = *(char *)(param_1 + 0x109);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar5 < cVar3);
  }
  if ((*(byte *)(param_1 + 0x10a) >> 2 & 1) != 0) {
    return;
  }
  FUN__text__0069db40(param_3,param_2,*(undefined8 *)(param_1 + 0x118));
  FUN__text__006af484(*(undefined8 *)(param_1 + 0x118),param_2,param_3);
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
    FUN__text__006b4e74(param_1,param_3,param_2);
  }
  FUN__text__0069dbb0(param_3,param_2);
  return;
}


