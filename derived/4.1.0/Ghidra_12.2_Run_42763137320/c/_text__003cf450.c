/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cf450; name: FUN_.text__003cf450
 */


void FUN__text__003cf450(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 auStack_230 [512];
  
  if ((*(char *)(param_1 + 0x20060) != '\0') &&
     (uVar1 = FUN__text__003d444c(*(undefined8 *)(param_1 + 0x20048)), (uVar1 & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x20038) = 0xffffffffffffffff;
    FUN__text__0014953c(auStack_230,*(undefined8 *)(param_1 + 0x20028));
    puVar2 = (undefined8 *)FUN__text__005d54f4(auStack_230,1);
    *(undefined8 *)(param_1 + 0x20038) = *puVar2;
    FUN__text__0014821c(auStack_230);
    lVar3 = FUN__text__006b4514(*(undefined8 *)(param_1 + 0x10));
    *(long *)(*(long *)(lVar3 + 0x18) + (long)*(int *)(param_1 + 0x18) * 0x10 + 8) =
         param_1 + 0x20030;
    *(undefined8 *)(param_1 + 0x20050) = 0;
    *(undefined8 *)(param_1 + 0x20058) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x20048) + 0xb4) = 0;
    *(undefined1 *)(param_1 + 0x20060) = 0;
  }
  return;
}


