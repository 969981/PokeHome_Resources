/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005db3ec; name: FUN_.text__005db3ec
 */


undefined8 FUN__text__005db3ec(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_38;
  undefined8 *local_30;
  char local_28;
  
  uVar2 = *param_2;
  FUN__text__005db4c0(&local_38);
  lVar1 = local_38;
  local_38 = 0;
  if (lVar1 != 0) {
    if (local_28 != '\0') {
      if (*(long *)(lVar1 + 0x48) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x48) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + 0x48) = 0;
      }
      if ((*(long *)(lVar1 + 0x28) != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x10) + 0x48) + 0x18))();
      }
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0xcbf29ce484222645;
      *(undefined8 *)(lVar1 + 0x20) = 0x70f683;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      if (*(long *)(lVar1 + 0x30) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x30) + 0x48) + 0x18))();
      }
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined4 *)(lVar1 + 0x38) = 0;
    }
    (**(code **)(*(long *)*local_30 + 0x18))((long *)*local_30,lVar1,0x50,8);
  }
  return uVar2;
}


