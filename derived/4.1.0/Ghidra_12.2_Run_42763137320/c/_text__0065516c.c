/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065516c; name: FUN_.text__0065516c
 */


undefined8
FUN__text__0065516c(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_4 = 1;
  memset((long *)(lVar3 + 0x1f0),0,0x470);
  *(undefined8 *)(lVar3 + 0x650) = param_2;
  *(undefined4 *)(lVar3 + 0x658) = param_3;
  lVar2 = FUN__text__0066bcc8(0,0x711233);
  *(long *)(lVar3 + 0x1f0) = lVar2;
  if (lVar2 != 0) {
    if (param_1[0x86] != 2) {
      iVar1 = FUN__text__00655288(lVar3,lVar3 + 0x1f8,1,param_2,*(undefined8 *)(lVar3 + 0xe58),
                                  *(undefined8 *)(lVar3 + 0xd8),lVar2);
      if (iVar1 != 0) goto LAB__text__0065522c;
      *(int *)(lVar3 + 0x648) = *(int *)(lVar3 + 0x648) + 1;
      if (param_1[0x86] == 1) {
        return 0;
      }
      lVar2 = *(long *)(lVar3 + 0x1f0);
    }
    iVar1 = FUN__text__00655288(lVar3,lVar3 + 0x420,0x1c,param_2,*(undefined8 *)(lVar3 + 0xe58),
                                *(undefined8 *)(lVar3 + 0xd8),lVar2);
    if (iVar1 == 0) {
      *(int *)(lVar3 + 0x648) = *(int *)(lVar3 + 0x648) + 1;
      return 0;
    }
  }
LAB__text__0065522c:
  FUN__text__0066bd88(*(undefined8 *)(lVar3 + 0x1f0));
  *(undefined8 *)(lVar3 + 0x1f0) = 0;
  FUN__text__0064ef58(*(undefined8 *)(lVar3 + 0x1f8));
  *(undefined8 *)(lVar3 + 0x1f8) = 0;
  FUN__text__0064ef58(*(undefined8 *)(lVar3 + 0x420));
  *(undefined8 *)(lVar3 + 0x420) = 0;
  return 0;
}


