/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a0c78; name: FUN_.text__001a0c78
 */


void FUN__text__001a0c78(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  uVar1 = FUN__text__001c1fa4(uVar3);
  **(undefined4 **)(lVar4 + 0x50) = uVar1;
  if (**(int **)(lVar4 + 0x50) != 0) {
    local_24 = 0;
    local_38[0] = 0;
    local_34 = 0;
    local_2c = 0;
    local_40 = 0;
    FUN__text__001c1fdc(uVar3,&local_24,local_38,&local_40);
    FUN__text__00191328(&local_54,local_38,&local_40);
    puVar2 = *(undefined8 **)(lVar4 + 0x48);
    *(undefined4 *)(puVar2 + 2) = local_44;
    *puVar2 = local_54;
    puVar2[1] = local_4c;
  }
  return;
}


