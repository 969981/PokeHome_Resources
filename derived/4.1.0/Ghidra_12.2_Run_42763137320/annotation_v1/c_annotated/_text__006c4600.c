/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C4600
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c4600; name: FUN_.text__006c4600
 */


void FUN__text__006c4600(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fStack_2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x10;
  fStack_2c = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0xdc)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_30 = *(float *)(param_1 + 0x50) - fStack_2c; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xde)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (undefined2)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (undefined2)((uint)uVar1 >> 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  local_38 = FUN__text__006b2e38(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uStack_34 = CONCAT22(uVar3,uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x109) == '\x02') { // [自动静态注释] 条件判断/分支
    FUN__text__006c6880(param_1,param_2,&local_38,*(undefined8 *)(param_1 + 0x110),&local_30, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined1 *)(param_1 + 0x5a));
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_1 + 0x109) == '\x01') { // [自动静态注释] 条件判断/分支
    FUN__text__006c6430(param_1,param_2,&local_38,*(undefined8 *)(param_1 + 0x110),&local_30, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined1 *)(param_1 + 0x5a));
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


