/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001dc0c0; name: FUN_.text__001dc0c0
 */


void FUN__text__001dc0c0(long param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int local_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined1 auStack_108 [100];
  int local_a4 [25];
  
  piVar1 = (int *)(param_1 + 0x8b3c);
  FUN__text__0019c35c(auStack_108);
  local_120 = *(undefined8 *)(param_1 + 0x8b8c);
  uStack_118 = *(undefined8 *)(param_1 + 0x8b94);
  local_110 = *(undefined4 *)(param_1 + 0x8b9c);
  local_140 = *(undefined8 *)(param_1 + 0x8b6c);
  uStack_138 = *(undefined8 *)(param_1 + 0x8b74);
  local_130 = *(undefined8 *)(param_1 + 0x8b7c);
  uStack_128 = *(undefined8 *)(param_1 + 0x8b84);
  local_160 = *(undefined8 *)(param_1 + 0x8b4c);
  uStack_158 = *(undefined8 *)(param_1 + 0x8b54);
  local_150 = *(undefined8 *)(param_1 + 0x8b5c);
  uStack_148 = *(undefined8 *)(param_1 + 0x8b64);
  uStack_168 = *(undefined8 *)(param_1 + 0x8b44);
  _local_170 = CONCAT44((int)((ulong)*(undefined8 *)piVar1 >> 0x20),param_2);
  uVar3 = FUN__text__0019c518(&local_170,auStack_108);
  if ((uVar3 & 1) == 0) {
    if (*piVar1 != param_2) {
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl();
      }
      lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x138);
      puVar2 = (undefined8 *)(param_1 + 0x89c8);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      *piVar1 = param_2;
      FUN__text__0019cd08(lVar4,piVar1,*(undefined1 *)(param_1 + 0x8ba3));
      *(undefined1 *)(param_1 + 0x89f8) = 0;
      *(undefined1 *)(param_1 + 0x8ba3) = 0;
      *(undefined2 *)(param_1 + 0x8ba0) = 1;
      if (*(long *)(*(long *)(param_1 + 0x89d0) + 0xe8) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x89d0) + 0xe8) = 0;
      }
      FUN__text__003b17ec(*puVar2,0,0);
      FUN__text__003b17f8(*puVar2,0);
      FUN__text__003ad2d0(*puVar2,0);
      FUN__text__001d7830(*(undefined8 *)(param_1 + 0x38),*piVar1);
      FUN__text__0019c35c(local_a4);
      FUN__text__001d91d8(*(undefined8 *)(param_1 + 0x40),*piVar1 != local_a4[0]);
      FUN__text__001db72c(param_1);
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      return;
    }
  }
  else {
    FUN__text__001dc250(param_1);
  }
  return;
}


