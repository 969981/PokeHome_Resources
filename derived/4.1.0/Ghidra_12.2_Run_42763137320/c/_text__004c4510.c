/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c4510; name: FUN_.text__004c4510
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN__text__004c4510(undefined8 param_1,long param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)FUN__text__00400f80(0x10,0x80);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar4 + 4) = 0xff;
    *(undefined1 *)(puVar4 + 5) = 0xff;
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined4 *)(puVar4 + 3) = 0;
    puVar4[0xf] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    *(undefined2 *)(puVar4 + 0xe) = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[6] = 0;
    puVar4[7] = param_1;
    *puVar4 = 0x88c5a0;
    puVar4[1] = param_2;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + 0x60);
      *(int *)(param_2 + 0x60) = iVar3 + 1;
      if ((iVar3 == 1) && (*(char *)(param_2 + 100) != '\0')) {
        FUN__text__004473d0(param_2);
      }
    }
    *(undefined1 *)(puVar4 + 0xe) = param_3;
    *(undefined1 *)((long)puVar4 + 0x71) = param_4;
    FUN__text__004c3b10(puVar4,0,0,puVar4 + 8);
    puVar2 = _DAT_008a45f0;
    if (*(int *)(puVar4 + 9) != 0) {
      puVar1 = (undefined8 *)puVar4[8];
      do {
        puVar5 = puVar1 + 1;
        iVar3 = FUN__text__004345d0(*puVar2,*puVar1,puVar4);
        puVar1 = puVar5;
      } while (iVar3 == 1 && puVar5 != (undefined8 *)(puVar4[8] + (ulong)*(uint *)(puVar4 + 9) * 8))
      ;
      if (iVar3 != 1) {
        FUN__text__00400fc0(0x10,puVar4);
        puVar4 = (undefined8 *)0x0;
      }
    }
  }
  return puVar4;
}


