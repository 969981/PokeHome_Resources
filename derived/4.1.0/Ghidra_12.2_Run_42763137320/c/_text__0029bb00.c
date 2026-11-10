/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029bb00; name: FUN_.text__0029bb00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0029bb00(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  long local_38;
  
  local_70 = 0xa7649e0ad180b01a;
  uStack_68 = 0x71a942;
  local_60 = 0x1b;
  local_58 = 0;
  FUN__text__00115650(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_70,0xb);
  lVar4 = *(long *)(local_38 + 0x60);
  if (lVar4 == 0) {
LAB__text__0029bb80:
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  else {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    if (local_38 != 0) goto LAB__text__0029bb80;
  }
  lVar3 = param_1 + 0x110;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  if (*(int *)(param_1 + 0x940) == 1) {
    local_70 = 0x56c6184ec9546c24;
    plVar1 = (long *)FUN__text__0012cdb0(lVar3,&local_70);
    uVar7 = 0;
    uVar5 = 9;
    uVar6 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x940) != 0) goto LAB__text__0029bcac;
    local_70 = 0x918e9ae3c487032f;
    plVar1 = (long *)FUN__text__0012cdb0(lVar3,&local_70);
    uVar6 = 0;
    uVar5 = 7;
    uVar7 = 1;
  }
  FUN__text__003a1630(plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1);
  uVar2 = FUN__text__0012cb14(lVar3,0x732590);
  FUN__text__003a14c4(uVar2,uVar7);
  uVar2 = FUN__text__0012cb14(lVar3,0x732598);
  FUN__text__003a14c4(uVar2,uVar7);
  uVar7 = FUN__text__0012cb14(lVar3,0x7325a0);
  FUN__text__003a14c4(uVar7,uVar6);
  uVar7 = FUN__text__0012cb14(lVar3,0x7325a8);
  FUN__text__003a14c4(uVar7,uVar6);
  FUN__text__0010e28c(*_DAT_0089f5a0,uVar5,0);
LAB__text__0029bcac:
  lVar3 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7325b8);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | *(int *)(param_1 + 0x940) == 0;
  lVar3 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7325c0);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | *(int *)(param_1 + 0x940) == 1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


