/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eec88; name: FUN_.text__004eec88
 */


undefined8 FUN__text__004eec88(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x138);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x10) != 0) {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      FUN__text__00400fc0(0);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined4 *)(lVar2 + 0x1c) = 0;
    }
    FUN__text__00400fc0(2,lVar2);
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  if (param_2 != 3) {
    *(int *)(param_1 + 300) = param_2;
    return 1;
  }
  puVar1 = (undefined8 *)FUN__text__00400f80(2,0x40);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 300) = 3;
    return 0x34;
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(byte *)(puVar1 + 4) = *(byte *)(puVar1 + 4) & 0xe0 | 8;
  *(undefined8 **)(param_1 + 0x138) = puVar1;
  *(undefined4 *)(param_1 + 300) = 3;
  return 1;
}


