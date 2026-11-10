/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00526e0c; name: FUN_.text__00526e0c
 */


void FUN__text__00526e0c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  double local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  lVar1 = *(long *)(param_2 + 0x20);
  if ((lVar1 != 0) &&
     ((((((0.0010000000474974513 <= ABS(*(double *)(param_3 + 0x78) - *(double *)(lVar1 + 0x78)) ||
          (0.0010000000474974513 <= ABS(*(double *)(param_3 + 0x80) - *(double *)(lVar1 + 0x80))))
         || (0.0010000000474974513 <= ABS(*(double *)(param_3 + 0x88) - *(double *)(lVar1 + 0x88))))
        || ((0.001 <= ABS(*(float *)(param_3 + 0x60) - *(float *)(lVar1 + 0x60)) ||
            (0.001 <= ABS(*(float *)(param_3 + 100) - *(float *)(lVar1 + 100)))))) ||
       ((0.001 <= ABS(*(float *)(param_3 + 0x68) - *(float *)(lVar1 + 0x68)) ||
        ((0.001 <= ABS(*(float *)(param_3 + 0x6c) - *(float *)(lVar1 + 0x6c)) ||
         (0.001 <= ABS(*(float *)(param_3 + 0x70) - *(float *)(lVar1 + 0x70)))))))) ||
      (0.001 <= ABS(*(float *)(param_3 + 0x74) - *(float *)(lVar1 + 0x74)))))) {
    local_38 = *(undefined4 *)(param_1 + 0x38);
    uStack_34 = *(undefined4 *)(param_1 + 0x24);
    local_30 = *(undefined4 *)(param_1 + 0x28);
    local_28 = *(double *)(param_3 + 0x78);
    uStack_20 = *(undefined8 *)(param_3 + 0x80);
    uStack_2c = *(undefined4 *)(param_1 + 0x2c);
    local_18 = *(undefined8 *)(param_3 + 0x88);
    local_40 = *(undefined8 *)(param_1 + 0x30);
    FUN__text__0047d5a8(lVar1,&local_40);
  }
  return;
}


