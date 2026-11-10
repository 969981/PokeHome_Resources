/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00441660; name: FUN_.text__00441660
 */


void FUN__text__00441660(long *param_1,long *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long local_48;
  long lStack_40;
  long local_38;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((int)param_1[1] == 0) {
    bVar1 = *(byte *)(param_1 + 2);
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    do {
      if (*(char *)(puVar2 + 1) != *(char *)((long)param_1 + 0x11)) {
        *(char *)(puVar2 + 1) = *(char *)((long)param_1 + 0x11);
        uStack_14 = (undefined4)param_2[2];
        local_18 = *(undefined4 *)((long)param_2 + 0x14);
        (*(code *)**(undefined8 **)*puVar2)
                  ((undefined8 *)*puVar2,(ulong)*(uint *)(*param_2 + 0x10) | 0x400000000,param_2[1],
                   &uStack_14,&local_18);
      }
      bVar1 = *(byte *)(param_1 + 2);
    } while (((bVar1 & 3) == 0) &&
            (puVar2 = puVar2 + 2,
            puVar2 != (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10)));
  }
  if ((bVar1 & 3) == 1) {
    *(byte *)(param_1 + 2) = bVar1 & 0xfe;
    local_48 = *param_2;
    lStack_40 = param_2[1];
    local_38 = param_2[2];
    FUN__text__00441660(param_1,&local_48);
  }
  return;
}


