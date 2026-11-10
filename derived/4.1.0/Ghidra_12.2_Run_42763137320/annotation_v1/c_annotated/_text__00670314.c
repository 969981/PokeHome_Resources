/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00570314
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00670314; name: FUN_.text__00670314
 */


int FUN__text__00670314(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = FUN__text__00678414(1,0x16f8); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(lVar2 + 0x16f0) = 0xc0dedbad;
    iVar1 = FUN__text__0064f240(lVar2,lVar2 + 0x1288); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006783e4(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      return iVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar3 = FUN__text__006783d4(0x4001); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(lVar2 + 0x1130) = lVar3;
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      lVar3 = FUN__text__006783d4(0x100); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(long *)(lVar2 + 0x1120) = lVar3;
      if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0067014c(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined8 *)(lVar2 + 0x1128) = 0x100;
        FUN__text__006535fc(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined8 *)(lVar2 + 0x1118) = 0xffffffffffffffff;
        *(undefined8 *)(lVar2 + 0x1140) = 0xffffffffffffffff;
        *(uint *)(lVar2 + 0xfac) = *(uint *)(lVar2 + 0xfac) | 0x10;
        FUN__text__006619c4(lVar2 + 0x1100); // [自动静态注释] 调用尚未恢复正式名称的函数
        *param_1 = lVar2;
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    thunk_FUN__text__006783e4(*(undefined8 *)(lVar2 + 0x1288)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006783e4(*(undefined8 *)(lVar2 + 0x1130)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006783e4(*(undefined8 *)(lVar2 + 0x1120)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0066fe70(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006783e4(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return 0x1b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


