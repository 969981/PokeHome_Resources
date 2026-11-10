/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b7a34; name: FUN_.text__002b7a34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002b7a34(long param_1)

{
  undefined8 uVar1;
  undefined8 local_40;
  ulong local_38;
  
  local_38 = local_38 & 0xffffffff00000000;
  uVar1 = FUN__text__002b145c(*_DAT_0089f510,&local_38);
  local_38 = param_1 + 0x108;
  local_40 = 4;
  FUN__text__002b7e20(uVar1,0x73343c,&local_38,&local_40);
  local_38 = param_1 + 0x10c;
  local_40 = 4;
  FUN__text__002b8050(uVar1,0x733440,&local_38,&local_40);
  local_38 = param_1 + 0x110;
  local_40 = 0x38;
  FUN__text__002b8280(uVar1,0x733444,&local_38,&local_40);
  FUN__text__002aede0(uVar1,0x733448,param_1 + 0x148);
  local_38 = param_1 + 0x150;
  local_40 = 8;
  FUN__text__002b84b0(uVar1,0x73344c,&local_38,&local_40);
  local_38 = param_1 + 0x158;
  local_40 = 8;
  FUN__text__002b84b0(uVar1,0x733450,&local_38,&local_40);
  FUN__text__002aede0(uVar1,0x733454,param_1 + 0x160);
  local_38 = param_1 + 0x168;
  local_40 = 0xd0;
  FUN__text__002b86e0(uVar1,0x733458,&local_38,&local_40);
  return;
}


