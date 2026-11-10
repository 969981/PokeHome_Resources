/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005673C0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006673c0; name: FUN_.text__006673c0
 */


long FUN__text__006673c0(long *param_1,int param_2,undefined8 param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined4 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_c0 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = nnsocketRecv(*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 600),param_3,param_4,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_5 = 0;
  if (lVar2 == -1) { // [自动静态注释] 条件判断/分支
    iVar1 = nnsocketGetLastErrno(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((iVar1 == 0xb) || (iVar1 == 4)) { // [自动静态注释] 条件判断/分支
      uVar4 = 0x51; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      memset(auStack_c0,0,0x80); // [自动静态注释] 内存复制、清零或移动
      lVar5 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = FUN__text__0066c474(iVar1,auStack_c0,0x80); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__0066713c(lVar5,0x71e019,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(int *)(*param_1 + 0x11c0) = iVar1;
      uVar4 = 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *param_5 = uVar4;
  } // [自动静态注释] 作用域/控制流边界
  return lVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


