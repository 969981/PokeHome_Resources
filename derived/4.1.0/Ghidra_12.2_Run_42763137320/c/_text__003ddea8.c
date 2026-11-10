/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ddea8; name: FUN_.text__003ddea8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003ddea8(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar4 = (uint *)*param_1;
  if (puVar4 == (uint *)0x0) {
    local_40 = 0;
    local_50 = 0;
    uStack_48 = 0;
    uStack_68 = uRam0000000000724788;
    local_70 = _DAT_00724780;
    uStack_58 = uRam0000000000724ca8;
    uStack_60 = _DAT_00724ca0;
    uVar3 = FUN__text__003dd89c(param_1,&local_70);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    puVar4 = (uint *)*param_1;
    uVar1 = *puVar4;
  }
  else {
    uVar1 = *puVar4;
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 >> 1 & 1) == 0) {
      if (*(long *)(puVar4 + 2) != 0) {
        lVar2 = FUN__text__003d83bc();
        if (lVar2 != 0) {
          return 0x72;
        }
        puVar4 = (uint *)*param_1;
      }
LAB__text__003ddf5c:
      (**(code **)(*(long *)(puVar4 + 0x18) + 0x18))(puVar4 + 0x18);
      puVar4[0x27] = 0;
      puVar4[0x1a] = 0;
      puVar4[0x1b] = 0;
      puVar4[0x1c] = 0;
      puVar4[0x1d] = 0;
      puVar4[0x1e] = 0;
      puVar4[0x1f] = 0;
      puVar4[0x22] = 0;
      puVar4[0x23] = 0;
      puVar4[0x24] = 0;
      puVar4[0x25] = 0;
      lVar2 = *param_1;
      if (*(long *)(lVar2 + 0xa0) == 0) {
        *(long *)(lVar2 + 0xa0) = param_2;
        *(long *)(lVar2 + 0xa8) = param_3 - param_2;
        uVar3 = FUN__text__003ddb30(param_1,lVar2 + 0x60);
        return uVar3;
      }
      uVar3 = FUN__text__003ddb30(param_1,lVar2 + 0x60);
      return uVar3;
    }
  }
  else if (*(long *)(puVar4 + 2) == 0) goto LAB__text__003ddf5c;
  return 0x72;
}


