/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00570D60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00670d60; name: FUN_.text__00670d60
 */


undefined8 FUN__text__00670d60(long *param_1,undefined1 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar4 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006663e0(lVar3,3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((*(byte *)(param_1[0x84] + 0x84) >> 4 & 1) == 0) { // [自动静态注释] 条件判断/分支
    *param_2 = 0;
    *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) & 0xff7fffff;
    if (*(long *)(lVar3 + 0xdb0) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006783e4(param_1[0x8c]); // [自动静态注释] 调用尚未恢复正式名称的函数
      param_1[0x8c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar1 = FUN__text__00659a28(0x714ae2,*(undefined8 *)(lVar3 + 0xdb0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      param_1[0x8c] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
        return 0x1b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(lVar3 + 0x110) = 0;
    *(undefined8 *)(lVar3 + 0x14e8) = 0;
    auVar4 = FUN__text__0066c6a8(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 (*) [16])(param_1 + 0x47) = auVar4;
    if ((int)param_1[0x4b] == -1) { // [自动静态注释] 条件判断/分支
      *(undefined1 *)((long)param_1 + 0x3fa) = 0;
      uVar2 = FUN__text__006503b4(param_1,param_1[0xd]); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((int)uVar2 != 0) { // [自动静态注释] 条件判断/分支
        return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__006663e0(lVar3,4); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006663e0(lVar3,5); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)((long)param_1 + 0x3fa) = 1;
      *param_2 = 1;
      FUN__text__0064fb7c(param_1,(int)param_1[0x4b]); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__0067091c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    auVar4 = FUN__text__0066c6a8(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 (*) [16])(param_1 + 0x47) = auVar4;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_2 = 1;
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


