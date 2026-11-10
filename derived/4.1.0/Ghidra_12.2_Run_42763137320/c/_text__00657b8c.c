/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00657b8c; name: FUN_.text__00657b8c
 */


void FUN__text__00657b8c(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined8 *)(*(long *)(param_1 + 8) + 0x38) = 0;
    lVar1 = *(long *)(param_1 + 8);
    if (*(code **)(lVar1 + 0x38) != (code *)0x0) {
      (**(code **)(lVar1 + 0x38))(*(undefined8 *)(lVar1 + 0x40));
    }
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    *(undefined8 *)(lVar1 + 0xb8) = 0;
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(long *)(lVar1 + 0x40) = lVar1;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0xa8) = 0;
    *(undefined8 *)(lVar1 + 0xb0) = 0;
  }
  FUN__text__00656ddc(param_1);
  return;
}


