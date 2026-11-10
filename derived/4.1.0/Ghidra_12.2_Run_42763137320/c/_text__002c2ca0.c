/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c2ca0; name: FUN_.text__002c2ca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c2ca0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  puVar1 = _DAT_0089f510;
  local_24 = 0;
  uVar2 = FUN__text__002b145c(*_DAT_0089f510,&local_24);
  FUN__text__002aede0(uVar2,0x7334b4,param_1 + 0x60);
  local_24 = 0;
  uVar2 = FUN__text__002b145c(*puVar1,&local_24);
  FUN__text__002aede0(uVar2,0x7334b8,param_1 + 100);
  local_24 = 0;
  uVar2 = FUN__text__002b145c(*puVar1,&local_24);
  FUN__text__002aede0(uVar2,0x7334bc,param_1 + 0x68);
  local_24 = 0;
  uVar2 = FUN__text__002b145c(*puVar1,&local_24);
  FUN__text__002aede0(uVar2,0x7334c0,param_1 + 0x6c);
  return;
}


