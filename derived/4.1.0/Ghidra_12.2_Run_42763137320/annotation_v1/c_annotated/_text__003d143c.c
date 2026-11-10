/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D143C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d143c; name: FUN_.text__003d143c
 */


void FUN__text__003d143c(long param_1,undefined8 param_2,long *param_3,int param_4,int param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        int param_6,undefined8 *param_7) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x620) == '\0') { // [自动静态注释] 条件判断/分支
    if (*(int *)(param_1 + 8) != 2) { // [自动静态注释] 条件判断/分支
      lVar4 = param_1 + (ulong)*(byte *)(param_1 + 0x550) * 0x290; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_3[3] != 0) { // [自动静态注释] 条件判断/分支
        plVar1 = param_3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (*plVar1 == *(long *)(lVar4 + 0x38) && *(int *)(lVar4 + 0x280) == param_4) // [自动静态注释] 条件判断/分支
      goto LAB__text__003d1464; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (param_5 == 0) { // [自动静态注释] 条件判断/分支
      FUN__text__003d15d0(param_1 + (ulong)*(byte *)(param_1 + 0x551) * 0x290 + 0x30,param_2,param_3 // [自动静态注释] 调用尚未恢复正式名称的函数
                          ,param_4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(param_1 + 8) = 1;
      *(undefined4 *)(param_1 + 0x598) = 2;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined1 *)(param_1 + 0x622) = 1;
      FUN__text__00168178(param_1 + 0x628); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00168178(param_1 + 0x558,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(int *)(param_1 + 0x588) = param_4;
      *(int *)(param_1 + 0x598) = param_6;
      if (param_6 == 1) { // [自动静态注释] 条件判断/分支
        if (*(long *)(param_1 + 0x590) != 0) { // [自动静态注释] 条件判断/分支
          lVar4 = FUN__text__006b4514(*(undefined8 *)(param_1 + 0x18)); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined8 *)(*(long *)(lVar4 + 0x18) + (long)*(int *)(param_1 + 0x20) * 0x10 + 8) =
               *(undefined8 *)(param_1 + 0x590);
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else if (param_6 == 0) { // [自动静态注释] 条件判断/分支
        *(byte *)(*(long *)(param_1 + 0x18) + 0x58) =
             *(byte *)(*(long *)(param_1 + 0x18) + 0x58) & 0xfe;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(param_1 + 0x550) = *(undefined1 *)(param_1 + 0x551);
    pcVar2 = *(code **)(param_1 + 0x5a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(param_1 + 0x620) = 0;
LAB__text__003d1464: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(param_1 + 8) = 1;
    pcVar2 = *(code **)(param_1 + 0x5a8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (pcVar2 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(param_1 + 0x5b0) = 0;
    *(undefined8 *)(param_1 + 0x5b8) = 0;
    *(undefined8 *)(param_1 + 0x5a0) = 0;
    *(undefined8 *)(param_1 + 0x5a8) = 0;
    (*pcVar2)(param_1 + 0x5c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((code *)param_7[2] != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (*(code *)param_7[2])(param_7 + 4,param_1 + 0x5c0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = param_7[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x5a8) = param_7[1];
    *(undefined8 *)(param_1 + 0x5b8) = uVar3;
    uVar3 = *param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x5b0) = param_7[2];
    *(undefined8 *)(param_1 + 0x5a0) = uVar3;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


