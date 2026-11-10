/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005C0CA8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c0ca8; name: FUN_.text__006c0ca8
 */


void FUN__text__006c0ca8(long param_1,undefined8 param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(long *)(param_1 + 0x10) = param_3;
  pcVar2 = *(char **)(param_3 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) { // [自动静态注释] 条件判断/分支
    lVar1 = *(long *)(param_3 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006f5944(pcVar2,param_2,param_3 + 0x10,*(undefined8 *)(lVar1 + 0x28), // [自动静态注释] 调用尚未恢复正式名称的函数
                        (*(long *)(lVar1 + 0x30) - *(long *)(lVar1 + 0x10)) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        **(long **)(param_3 + 0x70) + -0x10,*(undefined4 *)(param_3 + 0x50));
    local_30 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ebe70(&local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_60 = CONCAT71(local_60._1_7_,*(undefined1 *)(param_3 + 0x5c)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_30 = *(undefined8 *)(param_3 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = CONCAT44(*(undefined4 *)(param_3 + 0x1c),(undefined4)local_60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_58 = CONCAT44(uStack_58._4_4_,*(undefined4 *)(param_3 + 0x58)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = CONCAT44(*(undefined4 *)(param_3 + 0x30),(undefined4)local_40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50._0_4_ = CONCAT22(*(undefined2 *)(param_3 + 0x16),(undefined2)local_50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006f5a88(*(undefined8 *)(param_3 + 0x88),param_2,&local_60); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


