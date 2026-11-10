/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d8c54; name: FUN_.text__001d8c54
 */


void FUN__text__001d8c54(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long local_68;
  
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  local_68 = lVar7;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar3 = *(long *)(param_1 + 8) + 0x110;
  plVar6 = (long *)(lVar7 + 0x48);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  FUN__text__001d93b0(param_1,&local_68);
  lVar1 = FUN__text__0012cb14(lVar3,param_1 + 0x198);
  lVar2 = FUN__text__0012cb14(lVar3,param_1 + 0x3c8);
  lVar3 = FUN__text__0012cb14(lVar3,param_1 + 0x438);
  if ((param_2 & 1) == 0) {
    FUN__text__003c7c60(lVar7,param_1 + 0x30,0);
    FUN__text__003c7c60(lVar7,param_1 + 0x38,1);
    *(undefined8 *)(lVar1 + 0x108) = 0;
    *(undefined1 *)(lVar1 + 0x110) = 0;
    lVar7 = *(long *)(param_1 + 8) + 0x110;
    lVar1 = FUN__text__0012cb14(lVar7,param_1 + 0x208);
    lVar7 = FUN__text__0012cb14(lVar7,param_1 + 0x278);
    if (*(int *)(param_1 + 0x6d8) != 2) {
      if (*(int *)(param_1 + 0x6d8) == 1) {
        *(undefined8 *)(lVar1 + 0x108) = 0;
LAB__text__001d8e3c:
        *(undefined1 *)(lVar1 + 0x110) = 0;
        *(undefined8 *)(lVar7 + 0x108) = 0;
      }
      else {
        if (*(char *)(lVar1 + 0x84) != '\0') {
          *(undefined8 *)(lVar1 + 0x108) = 0x800000000;
          goto LAB__text__001d8e3c;
        }
        *(undefined8 *)(lVar1 + 0x108) = 0;
        *(undefined1 *)(lVar1 + 0x110) = 0;
        *(undefined8 *)(lVar7 + 0x108) = 0x800000000;
      }
      *(undefined1 *)(lVar7 + 0x110) = 0;
    }
    lVar7 = *(long *)(param_1 + 8) + 0x110;
    lVar1 = FUN__text__0012cb14(lVar7,param_1 + 0x2e8);
    lVar7 = FUN__text__0012cb14(lVar7,param_1 + 0x358);
    if (*(int *)(param_1 + 0x6d8) == 2) {
      uVar4 = 0x400000000;
      uVar5 = 0x100000000000000;
      goto LAB__text__001d8edc;
    }
    if (*(int *)(param_1 + 0x6d8) == 1) {
      *(undefined8 *)(lVar1 + 0x108) = 0;
      *(undefined1 *)(lVar1 + 0x110) = 0;
LAB__text__001d8ed0:
      uVar4 = 0x400000000;
      uVar5 = 0x100000000000000;
      goto LAB__text__001d8ed4;
    }
    if (*(char *)(lVar1 + 0x84) != '\0') {
      *(undefined1 *)(lVar1 + 0x110) = 0;
      *(undefined8 *)(lVar1 + 0x108) = 0x400000000;
      goto LAB__text__001d8ed0;
    }
    uVar4 = 0x400000000;
    uVar5 = 0x100000000000000;
    *(undefined8 *)(lVar1 + 0x108) = 0;
    *(undefined1 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar7 + 0x108) = 0x400000000;
  }
  else {
    FUN__text__003c7c60(lVar7,param_1 + 0x30,1);
    FUN__text__003c7c60(lVar7,param_1 + 0x38,0);
    *(undefined1 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar1 + 0x108) = 0x100000000000000;
    lVar7 = *(long *)(param_1 + 8) + 0x110;
    lVar1 = FUN__text__0012cb14(lVar7,param_1 + 0x208);
    lVar7 = FUN__text__0012cb14(lVar7,param_1 + 0x278);
    if (*(int *)(param_1 + 0x6d8) != 2) {
      if (*(int *)(param_1 + 0x6d8) == 1) {
        *(undefined8 *)(lVar1 + 0x108) = 0;
LAB__text__001d8dcc:
        *(undefined1 *)(lVar1 + 0x110) = 0;
        *(undefined8 *)(lVar7 + 0x108) = 0;
      }
      else {
        if (*(char *)(lVar1 + 0x84) != '\0') {
          *(undefined8 *)(lVar1 + 0x108) = 0x800000000;
          goto LAB__text__001d8dcc;
        }
        *(undefined8 *)(lVar1 + 0x108) = 0;
        *(undefined1 *)(lVar1 + 0x110) = 0;
        *(undefined8 *)(lVar7 + 0x108) = 0x800000000;
      }
      *(undefined1 *)(lVar7 + 0x110) = 0;
    }
    lVar7 = *(long *)(param_1 + 8) + 0x110;
    lVar1 = FUN__text__0012cb14(lVar7,param_1 + 0x2e8);
    lVar7 = FUN__text__0012cb14(lVar7,param_1 + 0x358);
    if (*(int *)(param_1 + 0x6d8) == 2) {
      uVar5 = 0;
      uVar4 = 0;
      goto LAB__text__001d8edc;
    }
    if (*(int *)(param_1 + 0x6d8) == 1) {
      *(undefined8 *)(lVar1 + 0x108) = 0;
    }
    else {
      if (*(char *)(lVar1 + 0x84) == '\0') {
        uVar5 = 0;
        *(undefined8 *)(lVar1 + 0x108) = 0;
        uVar4 = 0;
        *(undefined1 *)(lVar1 + 0x110) = 0;
        *(undefined8 *)(lVar7 + 0x108) = 0x400000000;
        goto LAB__text__001d8ed8;
      }
      *(undefined8 *)(lVar1 + 0x108) = 0x400000000;
    }
    uVar5 = 0;
    uVar4 = 0;
    *(undefined1 *)(lVar1 + 0x110) = 0;
LAB__text__001d8ed4:
    *(undefined8 *)(lVar7 + 0x108) = 0;
  }
LAB__text__001d8ed8:
  *(undefined1 *)(lVar7 + 0x110) = 0;
LAB__text__001d8edc:
  *(undefined8 *)(lVar2 + 0x108) = uVar5;
  *(undefined1 *)(lVar2 + 0x110) = 0;
  *(undefined8 *)(lVar3 + 0x108) = uVar4;
  *(undefined1 *)(lVar3 + 0x110) = 0;
                    /* WARNING: Could not recover jumptable at 0x001d8f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6);
  return;
}


