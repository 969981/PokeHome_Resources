/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c2010; name: FUN_.text__004c2010
 */


void FUN__text__004c2010(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_2[1];
  while (puVar2 != (undefined8 *)0x0) {
    if (puVar2[4] == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      uVar1 = *(uint *)(puVar2 + 3);
      puVar2[4] = 0;
    }
    else {
      param_2[1] = puVar2[4];
      uVar1 = *(uint *)(puVar2 + 3);
      puVar2[4] = 0;
    }
    if (uVar1 >> 0x1e == 2) {
      (**(code **)(*param_1 + 8))(param_1,param_2,puVar2);
    }
    FUN__text__004c20f0(param_1,*puVar2,puVar2 + 1,*(undefined4 *)((long)puVar2 + 0x14),0,0);
    FUN__text__00447104(*puVar2);
    FUN__text__00400fc0(0,puVar2);
    puVar2 = (undefined8 *)param_2[1];
  }
  FUN__text__004c2460(param_1,param_3);
  return;
}


