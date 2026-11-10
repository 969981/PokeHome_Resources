/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0032769C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042769c; name: FUN_.text__0042769c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042769c(long param_1,undefined4 *param_2,undefined2 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(uint *)(lVar3 + 0x313); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar4 >> 0x17 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((ulong)*_DAT_008a4b68 != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = ((ulong)*(uint *)(lVar3 + 0x30c) * (ulong)*(uint *)(param_1 + 0x24)) / // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              (ulong)*_DAT_008a4b68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__004de2f0(uVar2,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34), // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined2 *)(lVar3 + 0x310),param_2,param_3);
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(short *)(lVar3 + 0x310) == 0) { // [自动静态注释] 条件判断/分支
      fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x2c)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x24)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar5 = (fVar5 * 1000.0) / fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar5 = (float)FUN__text__004de200(param_1 + 0x24); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = *(long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = *(uint *)(lVar3 + 0x313); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x24)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__004de2f0((int)(fVar5 * *(float *)(lVar3 + 0x30c) * fVar6 * 0.001), // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                        *(undefined2 *)(lVar3 + 0x310),param_2,param_3);
  } // [自动静态注释] 作用域/控制流边界
  if (((uVar4 >> 0x18 & 1) == 0) || // [自动静态注释] 条件判断/分支
     (lVar3 = FUN__text__004af5c0(param_1 + 0xa0,*param_2), lVar3 == 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(undefined4 *)(lVar3 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = uVar1;
  FUN__text__004de2f0(uVar1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),*param_3 // [自动静态注释] 调用尚未恢复正式名称的函数
                      ,param_2,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


