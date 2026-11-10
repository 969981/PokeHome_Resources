/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005BB00C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bb00c; name: FUN_.text__006bb00c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006bb00c(float param_1,float param_2,float param_3,float param_4,long param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_6,uint param_7,uint param_8,undefined4 param_9,float *param_10, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        int param_11,uint param_12) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_7 & 1) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_6 + 0x9c) = 0;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_68 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_64 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006c1ba0(0,0x42c80000,&local_64); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_6 + 0x54) = param_9;
    *(float *)(param_6 + 0x80) = local_64 / param_1 + 1e-05;
    FUN__text__006c1ba0(0,0x42c80000,&local_68); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_3 = (*_DAT_008a02c8 / *_DAT_008a02d0) * param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar1 = cosf(param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar1 = fVar1 * (local_68 / *(float *)(param_5 + 0x50)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_6 + 0x84) = fVar1 + fVar1;
    fVar1 = sinf(param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar1 = -(fVar1 * (local_68 / *(float *)(param_5 + 0x54))); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(float *)(param_6 + 0x88) = fVar1 + fVar1;
    fVar1 = *param_10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_6 + 0xa0) = 0;
    *(float *)(param_6 + 0x90) = fVar1 / 255.0;
    fVar1 = param_10[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_6 + 0xa4) = 0;
    *(float *)(param_6 + 0x94) = fVar1 / 255.0;
    fVar1 = param_10[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_6 + 0xa8) = 0;
    *(float *)(param_6 + 0x98) = fVar1 / 255.0;
    fVar1 = param_10[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_6 + 0xac) = 0;
    *(float *)(param_6 + 0x9c) = fVar1 / 255.0;
    ((undefined4 *)(param_6 + 0xa0))[param_11] = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_6 + 0x8c) = 0;
    if ((param_12 & 1) != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = 0x40000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((param_8 & 1) == 0) { // [自动静态注释] 条件判断/分支
        uVar2 = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(param_6 + 0x8c) = uVar2;
      fVar1 = (float)NEON_ucvtf((uint)*(byte *)(param_5 + 0x5a)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(float *)(param_6 + 0x9c) = *(float *)(param_6 + 0x9c) * (fVar1 / 255.0);
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


