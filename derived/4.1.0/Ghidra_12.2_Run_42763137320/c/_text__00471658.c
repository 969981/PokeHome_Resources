/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00471658; name: FUN_.text__00471658
 */


undefined8
FUN__text__00471658(undefined4 param_1,long *param_2,undefined8 param_3,int param_4,ulong param_5,
                   undefined4 *param_6,long *param_7,byte param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_60;
  long *plStack_58;
  undefined8 local_50;
  long *plStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  byte local_37;
  
  local_38 = 0;
  local_3c = 1;
  local_50 = 0;
  plStack_58 = param_7 + 0x6d;
  local_37 = (*(uint *)((long)param_7 + 0x313) & 0x2000000) == 0 & param_8;
  if ((*(ushort *)(param_7 + 0x44) & 0x40) != 0) {
    plStack_58 = (long *)0x0;
  }
  local_60 = param_3;
  plStack_48 = param_7;
  local_40 = param_1;
  iVar1 = (**(code **)(*param_2 + 0x118))(param_2,&local_60,1,0);
  if ((iVar1 == 2) ||
     (((param_4 == 0x50 || (iVar1 == 0x50)) &&
      (*(ushort *)(param_7 + 0x44) = *(ushort *)(param_7 + 0x44) | 0x100, (param_5 & 1) == 0)))) {
    *param_6 = 0x20;
    return 3;
  }
  uVar2 = (**(code **)(*param_7 + 0x18))(param_7);
  return uVar2;
}


