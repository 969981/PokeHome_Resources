/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f5a88; name: FUN_.text__006f5a88
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f5a88(undefined1 *param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
  *(undefined1 **)(param_1 + 0x10) = param_1 + 0x18;
  (*DAT_00c60498)();
  (*(code *)*_DAT_008a6950)
            (*(undefined8 *)(param_1 + 0x10),*(undefined2 *)(param_3 + 0x10),
             *(undefined2 *)(param_3 + 0x12));
  if (*param_3 != '\x02') {
    (*(code *)*_DAT_008a7488)
              (*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_3 + 0x20),
               *(undefined4 *)(param_3 + 0x24));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN__text__006f2200(*(undefined4 *)(param_3 + 4));
  FUN__text__006f5fa0(uVar2,uVar1,*(undefined8 *)(param_1 + 8));
  (*DAT_00c604b8)(*(undefined8 *)(param_1 + 0x10),
                  *(undefined4 *)((ulong)(byte)param_3[8] * 4 + 0x77f9bc),
                  *(undefined4 *)((ulong)(byte)param_3[9] * 4 + 0x77f9bc),
                  *(undefined4 *)((ulong)(byte)param_3[10] * 4 + 0x77f9bc),
                  *(undefined4 *)((ulong)(byte)param_3[0xb] * 4 + 0x77f9bc));
  (*(code *)*_DAT_008a74a0)(*(undefined8 *)(param_1 + 0x10),param_3[1] != '\0');
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN__text__006f22c0(*param_3);
  (*(code *)*_DAT_008a74a8)(uVar2,uVar1);
  param_1[1] = param_1[1] & 0xfe;
  *param_1 = 1;
  return;
}


