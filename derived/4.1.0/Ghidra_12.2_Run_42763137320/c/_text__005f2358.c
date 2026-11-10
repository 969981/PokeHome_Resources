/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f2358; name: FUN_.text__005f2358
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f2358(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = _DAT_008a02b8;
  lVar3 = *param_1;
  FUN__text__005f15d0(*_DAT_008a02b8);
  uVar2 = (**(code **)(**(long **)(lVar3 + 0xb0) + 0x38))(*(long **)(lVar3 + 0xb0),0,0);
  FUN__text__005f15c0(*puVar1,uVar2);
  return;
}


