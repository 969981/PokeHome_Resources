/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0059D970
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069d970; name: FUN_.text__0069d970
 */


void FUN__text__0069d970(float param_1,float param_2,long param_3,long param_4,undefined4 *param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 *param_6,int param_7,long param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  float *pfVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((0 < param_7) && (param_8 != 0)) { // [自动静态注释] 条件判断/分支
    cVar2 = *(char *)(param_3 + 400); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (-1 < cVar2) { // [自动静态注释] 条件判断/分支
      if (cVar2 < param_7) { // [自动静态注释] 条件判断/分支
        pfVar1 = (float *)(param_8 + (long)cVar2 * 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)(param_4 + 0xe0) = *pfVar1 + param_1;
        fVar3 = pfVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_4 + 0xe8) = 0x3f80000000000000;
        *(float *)(param_4 + 0xe4) = fVar3 + param_2;
        *(float *)(param_4 + 0xf0) = pfVar1[2] + param_1;
        fVar3 = pfVar1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_4 + 0xf8) = 0x3f80000000000000;
        *(float *)(param_4 + 0xf4) = fVar3 + param_2;
        *(float *)(param_4 + 0x100) = pfVar1[4] + param_1;
        fVar3 = pfVar1[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_4 + 0x108) = 0x3f80000000000000;
        *(float *)(param_4 + 0x104) = fVar3 + param_2;
        *(float *)(param_4 + 0x110) = pfVar1[6] + param_1;
        fVar3 = pfVar1[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(param_4 + 0x118) = 0x3f80000000000000;
        *(float *)(param_4 + 0x114) = fVar3 + param_2;
      } // [自动静态注释] 作用域/控制流边界
      cVar2 = *(char *)(param_3 + 0x191); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (-1 < cVar2) { // [自动静态注释] 条件判断/分支
        if (cVar2 < param_7) { // [自动静态注释] 条件判断/分支
          pfVar1 = (float *)(param_8 + (long)cVar2 * 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(param_4 + 0x120) = *pfVar1 + param_1;
          fVar3 = pfVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_4 + 0x128) = 0x3f80000000000000;
          *(float *)(param_4 + 0x124) = fVar3 + param_2;
          *(float *)(param_4 + 0x130) = pfVar1[2] + param_1;
          fVar3 = pfVar1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_4 + 0x138) = 0x3f80000000000000;
          *(float *)(param_4 + 0x134) = fVar3 + param_2;
          *(float *)(param_4 + 0x140) = pfVar1[4] + param_1;
          fVar3 = pfVar1[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_4 + 0x148) = 0x3f80000000000000;
          *(float *)(param_4 + 0x144) = fVar3 + param_2;
          *(float *)(param_4 + 0x150) = pfVar1[6] + param_1;
          fVar3 = pfVar1[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_4 + 0x158) = 0x3f80000000000000;
          *(float *)(param_4 + 0x154) = fVar3 + param_2;
        } // [自动静态注释] 作用域/控制流边界
        cVar2 = *(char *)(param_3 + 0x192); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((-1 < cVar2) && (cVar2 < param_7)) { // [自动静态注释] 条件判断/分支
          pfVar1 = (float *)(param_8 + (long)cVar2 * 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(param_4 + 0x160) = *pfVar1 + param_1;
          fVar3 = pfVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_4 + 0x168) = 0x3f80000000000000;
          *(float *)(param_4 + 0x164) = fVar3 + param_2;
          *(float *)(param_4 + 0x170) = pfVar1[2] + param_1;
          fVar3 = pfVar1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_4 + 0x178) = 0x3f80000000000000;
          *(float *)(param_4 + 0x174) = fVar3 + param_2;
          *(float *)(param_4 + 0x180) = pfVar1[4] + param_1;
          fVar3 = pfVar1[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_4 + 0x188) = 0x3f80000000000000;
          *(float *)(param_4 + 0x184) = fVar3 + param_2;
          *(float *)(param_4 + 400) = pfVar1[6] + param_1;
          fVar3 = pfVar1[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(param_4 + 0x198) = 0x3f80000000000000;
          *(float *)(param_4 + 0x194) = fVar3 + param_2;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_4 + 0x210) = *param_6;
  *(undefined4 *)(param_4 + 0x214) = param_6[1];
  *(undefined4 *)(param_4 + 0x218) = *param_5;
  *(undefined4 *)(param_4 + 0x21c) = param_5[1];
  FUN__text__0069df34(param_3,param_4 + 0x40); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


