/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005903dc; name: FUN_.text__005903dc
 */


int FUN__text__005903dc(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 8;
  iVar2 = FUN__text__0058f96c(lVar1);
  if (iVar2 == 1) {
    *(undefined2 *)(param_1 + 0x5c) = 0;
    return 1;
  }
  FUN__text__00585f10(param_1 + 0x70);
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(lVar1);
  if (*(long *)(param_1 + 0x100) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  FUN__text__004dd8a0(lVar1);
  return iVar2;
}


