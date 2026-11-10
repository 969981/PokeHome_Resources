/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c0b40; name: FUN_.text__002c0b40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c0b40(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_38;
  ulong local_30;
  undefined4 local_24;
  
  puVar1 = _DAT_0089f510;
  local_30 = local_30 & 0xffffffff00000000;
  uVar2 = FUN__text__002b145c(*_DAT_0089f510,&local_30);
  FUN__text__002aede0(uVar2,_DAT_008a2490,param_1 + 0x60);
  local_24 = 0;
  uVar2 = FUN__text__002b145c(*puVar1,&local_24);
  local_30 = param_1 + 100;
  local_38 = 0x1e460;
  FUN__text__002c0bc0(uVar2,0x7334b0,&local_30,&local_38);
  return;
}


