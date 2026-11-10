/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0055C4CC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065c4cc; name: FUN_.text__0065c4cc
 */


/* WARNING: Removing unreachable block (ram,0x0065c9b8) */
/* WARNING: Removing unreachable block (ram,0x0065c99c) */
/* WARNING: Removing unreachable block (ram,0x0065c924) */
/* WARNING: Removing unreachable block (ram,0x0065c964) */
/* WARNING: Removing unreachable block (ram,0x0065c8ec) */
/* WARNING: Removing unreachable block (ram,0x0065c980) */
/* WARNING: Removing unreachable block (ram,0x0065c908) */
/* WARNING: Removing unreachable block (ram,0x0065c940) */
/* WARNING: Removing unreachable block (ram,0x0065c8cc) */
/* WARNING: Removing unreachable block (ram,0x0065c9d4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa0 : 0x0065c8d8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN__text__0065c4cc(long *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) { // [自动静态注释] 条件判断/分支
    uVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else if ((char)param_1[0x3c] == '\0') { // [自动静态注释] 条件判断/分支
    uVar1 = 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2 < 0x271b) { // [自动静态注释] 条件判断/分支
      if (param_2 - 3U < 0xb) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0065c5cc */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)((ulong)*(byte *)((ulong)(param_2 - 3U) + 0x760272) * 4 + 0x65c51c))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if (param_2 == 0x2712) { // [自动静态注释] 条件判断/分支
        uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_1[0xd] = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else if (param_2 == 0x2715) { // [自动静态注释] 条件判断/分支
        uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_1[0x39] = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (param_2 < 0x4e24) { // [自动静态注释] 条件判断/分支
      if (param_2 < 0x271f) { // [自动静态注释] 条件判断/分支
        if (param_2 == 0x271b) { // [自动静态注释] 条件判断/分支
          uVar1 = FUN__text__00665ab0(local_60,param_1 + 0x30); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (param_2 != 0x271c) { // [自动静态注释] 条件判断/分支
            return 6; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          uVar1 = FUN__text__00665c38(local_60,param_1 + 0x34); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        uVar1 = uVar1 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else if (param_2 == 0x271f) { // [自动静态注释] 条件判断/分支
        uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_1[0xf] = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else if (param_2 == 0x4e21) { // [自动静态注释] 条件判断/分支
        uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_1[0xc] = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (param_2 < 0x7539) { // [自动静态注释] 条件判断/分支
      if (param_2 == 0x4e24) { // [自动静态注释] 条件判断/分支
        uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_1[0x38] = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else if (param_2 == 0x4e2e) { // [自动静态注释] 条件判断/分支
        uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_1[0xe] = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (param_2 == 0x7539) { // [自动静态注释] 条件判断/分支
      uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x2e] = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else if (param_2 == 0x753a) { // [自动静态注释] 条件判断/分支
      uVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[0x2f] = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar1 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


