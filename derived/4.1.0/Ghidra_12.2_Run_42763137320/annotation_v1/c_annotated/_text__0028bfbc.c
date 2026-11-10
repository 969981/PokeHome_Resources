/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0018BFBC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028bfbc; name: FUN_.text__0028bfbc
 */


void FUN__text__0028bfbc(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = FUN__text__0027a5c0(*(undefined8 *)(lVar4 + 0x640),*(undefined4 *)(lVar4 + 0x970)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (1 < iVar2) { // [自动静态注释] 条件判断/分支
    if (0 < *(int *)(lVar4 + 0x974)) { // [自动静态注释] 条件判断/分支
      iVar2 = *(int *)(lVar4 + 0x974); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(int *)(lVar4 + 0x974) = iVar2 + -1;
    FUN__text__0028aca0(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00285880(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(lVar4 + 0x97a) = 0;
    bVar1 = *(int *)(lVar4 + 0x878) != 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__0012cb14(lVar4 + 0x110,0x7305f0); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a14e8(uVar3,bVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__0012cb14(lVar4 + 0x110,0x7305f8); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003a14e8(uVar3,bVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00286570(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(lVar4 + 0x4e0) == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__003c02e4(); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


