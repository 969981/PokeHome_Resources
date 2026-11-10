/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c2d74; name: FUN_.text__002c2d74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__002c2d74(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_24;
  
  local_24 = 0;
  lVar2 = FUN__text__002b145c(*_DAT_0089f510,&local_24);
  uVar1 = FUN__text__002be610(lVar2,0x7334c4);
  if (((uVar1 & 0xff) == 0) && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0x7334c4);
    return uVar1 >> 8 & 0xff;
  }
  return uVar1 >> 8 & 0xff;
}


