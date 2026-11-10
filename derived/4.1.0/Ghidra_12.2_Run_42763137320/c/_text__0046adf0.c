/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046adf0; name: FUN_.text__0046adf0
 */


void FUN__text__0046adf0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  do {
    lVar3 = param_1;
    param_1 = *(long *)(lVar3 + 0x78);
  } while ((*(ulong *)(lVar3 + 0x98) & 0x20020000ffe) == 0 && *(long *)(lVar3 + 0x78) != 0);
  if (*(long *)(lVar3 + 0x68) == 0) {
    *param_2 = 0;
    return;
  }
  puVar4 = (undefined8 *)FUN__text__00400f80(5,0x38);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[5] = 0;
    puVar4[6] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    FUN__text__0047b420(puVar4);
    puVar5 = *(undefined8 **)(lVar3 + 0x68);
    uVar1 = *puVar5;
    uVar6 = puVar5[2];
    puVar4[1] = puVar5[1];
    puVar4[2] = uVar6;
    *puVar4 = uVar1;
    uVar1 = puVar5[3];
    uVar6 = puVar5[4];
    uVar2 = puVar5[6];
    puVar4[5] = puVar5[5];
    puVar4[6] = uVar2;
    puVar4[3] = uVar1;
    puVar4[4] = uVar6;
  }
  *param_2 = puVar4;
  return;
}


