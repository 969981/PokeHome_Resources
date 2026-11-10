/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003EDD4C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004edd4c; name: FUN_.text__004edd4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004edd4c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(param_1 + 0x48) != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = FUN__text__004ec6d4(); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = FUN__text__004ed5a0(*(undefined8 *)(param_1 + 0x48)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (*(int *)(param_1 + 0x40) == 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 8) = uVar2;
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x20) = 0xff;
      *(undefined1 *)(param_1 + 0x28) = 0xff;
      *(undefined8 *)(param_1 + 0x30) = 0;
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = FUN__text__00435b28(*_DAT_008a45f0,param_1 + 8,*(undefined8 *)(lVar3 + 4)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  FUN__text__00433670(param_1,*(undefined8 *)(lVar3 + 4)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(int *)(param_1 + 0x68) == 0) { // [自动静态注释] 条件判断/分支
    uVar1 = FUN__text__004efa5c(*(undefined8 *)(param_1 + 0x50)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    FUN__text__004edb70(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004edb70(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


