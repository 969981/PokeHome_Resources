/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004393b0; name: FUN_.text__004393b0
 */


void FUN__text__004393b0(long *param_1,long *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  if ((int)param_1[1] == 0) {
    bVar1 = *(byte *)(param_1 + 2);
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    do {
      if (*(char *)(puVar2 + 1) != *(char *)((long)param_1 + 0x11)) {
        *(char *)(puVar2 + 1) = *(char *)((long)param_1 + 0x11);
        (*(code *)**(undefined8 **)*puVar2)
                  ((undefined8 *)*puVar2,*(undefined8 *)(*param_2 + 8),param_2[2],param_2 + 1,
                   (long)param_2 + 0xc);
      }
      bVar1 = *(byte *)(param_1 + 2);
    } while (((bVar1 & 3) == 0) &&
            (puVar2 = puVar2 + 2,
            puVar2 != (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10)));
  }
  if ((bVar1 & 3) == 1) {
    *(byte *)(param_1 + 2) = bVar1 & 0xfe;
    local_58 = *param_2;
    local_50 = (undefined4)param_2[1];
    uStack_4c = *(undefined4 *)((long)param_2 + 0xc);
    local_48 = param_2[2];
    FUN__text__004393b0(param_1,&local_58);
  }
  return;
}


