/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00474788; name: FUN_.text__00474788
 */


int FUN__text__00474788(undefined8 *param_1,int *param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  
  if (*param_2 != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN__text__004748c0(param_1,1,0x1000000,*(undefined8 *)param_2);
  }
  if (((param_3 & 1) == 0) && ((*(byte *)((long)param_1 + 0x312) & 7) != 1)) {
    iVar2 = FUN__text__004730bc(0,param_1);
  }
  else {
    uVar1 = *(uint *)((long)param_1 + 0x32c);
    *(uint *)((long)param_1 + 0x313) = *(uint *)((long)param_1 + 0x313) | 0x4000;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    *(uint *)((long)param_1 + 0x32c) = uVar1;
    iVar2 = FUN__text__004730bc(1,param_1);
    if (param_1[0x51] != 0) {
      FUN__text__0042f610(DAT_00ae9a60);
    }
    FUN__text__0047af90(param_1 + 3,1);
    if (param_1[0x12] != 0) {
      FUN__text__004587e0();
    }
  }
  if (iVar2 == 1) {
    if ((*(byte *)((long)param_1 + 0x312) & 7) == 2) {
      (**(code **)*param_1)(param_1,0,0);
    }
    if ((param_4 & 1) != 0) {
      DAT_00aea808 = DAT_00aea808 + 1;
      return 1;
    }
  }
  return iVar2;
}


