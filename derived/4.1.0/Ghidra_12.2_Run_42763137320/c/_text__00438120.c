/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00438120; name: FUN_.text__00438120
 */


void FUN__text__00438120(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  if ((int)param_1[1] == 0) {
    bVar1 = *(byte *)(param_1 + 2);
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    do {
      if (*(char *)(puVar2 + 1) != *(char *)((long)param_1 + 0x11)) {
        *(char *)(puVar2 + 1) = *(char *)((long)param_1 + 0x11);
        (**(code **)(*(long *)*puVar2 + 8))
                  ((long *)*puVar2,*param_2,param_2[1],param_2 + 2,(long)param_2 + 0x14);
      }
      bVar1 = *(byte *)(param_1 + 2);
    } while (((bVar1 & 3) == 0) &&
            (puVar2 = puVar2 + 2,
            puVar2 != (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10)));
  }
  if ((bVar1 & 3) == 1) {
    *(byte *)(param_1 + 2) = bVar1 & 0xfe;
    local_58 = *param_2;
    uStack_50 = param_2[1];
    local_48 = *(undefined4 *)(param_2 + 2);
    uStack_44 = *(undefined4 *)((long)param_2 + 0x14);
    FUN__text__00438120(param_1,&local_58);
  }
  return;
}


