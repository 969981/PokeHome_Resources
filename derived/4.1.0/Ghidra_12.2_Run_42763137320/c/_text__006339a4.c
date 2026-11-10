/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006339a4; name: FUN_.text__006339a4
 */


undefined8 FUN__text__006339a4(long param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  cVar1 = FUN__text__00619bb0(*(undefined8 *)(param_1 + 0x2f0));
  if (cVar1 != '\0') {
    uVar2 = FUN__text__00618f90(*(undefined8 *)(param_1 + 0x2f0));
    if (uVar2 == *(byte *)(param_2 + 1)) {
      iVar3 = FUN__text__006101d0(*(undefined8 *)(param_1 + 0x2f0));
      if ((iVar3 == *param_2) &&
         (uVar6 = FUN__text__00619d30(*(undefined8 *)(param_1 + 0x2f0),(long)param_2 + 6),
         (uVar6 & 1) != 0)) {
        FUN__text__00620210(*(undefined8 *)(param_1 + 0x2f0),0);
        uVar7 = 1;
        goto LAB__text__00633aa8;
      }
    }
  }
  FUN__text__00620210(*(undefined8 *)(param_1 + 0x2f0),1);
  FUN__text__00621170(*(undefined8 *)(param_1 + 0x2f0),(long)param_2 + 6);
  FUN__text__006212f0(*(undefined8 *)(param_1 + 0x2f0),(char)param_2[1]);
  FUN__text__00621480(*(undefined8 *)(param_1 + 0x2f0),*(undefined1 *)((long)param_2 + 5));
  FUN__text__00620b30(*(undefined8 *)(param_1 + 0x2f0),0);
  FUN__text__00620cc0(*(undefined8 *)(param_1 + 0x2f0),0);
  FUN__text__00620e50(*(undefined8 *)(param_1 + 0x2f0),0);
  FUN__text__00620fe0(*(undefined8 *)(param_1 + 0x2f0),0);
  uVar4 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar5 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
  uVar4 = FUN__text__005ffacc(uVar4,uVar5,*(undefined1 *)(param_1 + 0x54));
  FUN__text__006203a0(*(undefined8 *)(param_1 + 0x2f0),uVar4);
  uVar7 = 0;
LAB__text__00633aa8:
  FUN__text__006337d0(param_1);
  FUN__text__00633884(param_1);
  return uVar7;
}


