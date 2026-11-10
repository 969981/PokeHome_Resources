/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013f0f0; name: FUN_.text__0013f0f0
 */


undefined8 FUN__text__0013f0f0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 local_24;
  
  lVar2 = *param_1;
  FUN__text__00128db0(lVar2,0,1);
  *(undefined1 *)(lVar2 + 0x648) = 0;
  if (*(code **)(lVar2 + 0x650) != (code *)0x0) {
    local_24 = (undefined4)param_1[1];
    (**(code **)(lVar2 + 0x650))(lVar2 + 0x670,&local_24);
  }
  if (*(code **)(lVar2 + 0x850) != (code *)0x0) {
    (**(code **)(lVar2 + 0x850))(lVar2 + 0x870);
  }
  if (*(long **)(lVar2 + 0xd90) != (long *)0x0) {
    (**(code **)(**(long **)(lVar2 + 0xd90) + 0x98))();
    lVar1 = *(long *)(lVar2 + 0xd90);
    *(undefined8 *)(lVar2 + 0xd90) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  return 1;
}


