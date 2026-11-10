/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0037C20C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047c20c; name: FUN_.text__0047c20c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__0047c20c(undefined8 param_1,int *param_2,uint *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_2 == 0) { // [自动静态注释] 条件判断/分支
    if ((char)param_2[0xb] == '\0') { // [自动静态注释] 条件判断/分支
      lVar4 = *(long *)(param_3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
        plVar3 = *(long **)(param_2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
          if (*(ushort *)(plVar3 + 2) - 1 == 0) { // [自动静态注释] 条件判断/分支
            if (*plVar3 != 0) { // [自动静态注释] 条件判断/分支
              *(undefined4 *)(plVar3 + 1) = 0;
              FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
              *plVar3 = 0;
              *(undefined4 *)((long)plVar3 + 0xc) = 0;
            } // [自动静态注释] 作用域/控制流边界
            FUN__text__00400fc0(0,plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
          } // [自动静态注释] 作用域/控制流边界
          else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            *(short *)(plVar3 + 2) = (short)(*(ushort *)(plVar3 + 2) - 1);
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        *(long *)(param_2 + 4) = lVar4;
        *(short *)(lVar4 + 0x10) = *(short *)(lVar4 + 0x10) + 1;
        uVar1 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(short *)(param_2 + 8) = (short)uVar1;
        *(ulong *)(param_2 + 6) = *(long *)(param_2 + 2) + (ulong)(uVar1 & 0xffff) * 0x18;
      } // [自动静态注释] 作用域/控制流边界
      uVar2 = FUN__text__0047c5b0(param_2,*(undefined4 *)(*_DAT_008a45c0 + 0x88)); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((*(byte *)(param_2 + 10) >> 1 & 1) != 0) { // [自动静态注释] 条件判断/分支
        return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__0047cb90(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      *param_3 = (uint)*(ushort *)(param_2 + 8);
      lVar4 = *(long *)(param_2 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar3 = *(long **)(param_3 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        if (*(ushort *)(plVar3 + 2) - 1 == 0) { // [自动静态注释] 条件判断/分支
          if (*plVar3 != 0) { // [自动静态注释] 条件判断/分支
            *(undefined4 *)(plVar3 + 1) = 0;
            FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
            *plVar3 = 0;
            *(undefined4 *)((long)plVar3 + 0xc) = 0;
          } // [自动静态注释] 作用域/控制流边界
          FUN__text__00400fc0(0,plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(short *)(plVar3 + 2) = (short)(*(ushort *)(plVar3 + 2) - 1);
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      *(long *)(param_3 + 2) = lVar4;
      if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
        return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *(short *)(lVar4 + 0x10) = *(short *)(lVar4 + 0x10) + 1;
      return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0047c8f0(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


