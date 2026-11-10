/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E61F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e61f0; name: FUN_.text__004e61f0
 */


void FUN__text__004e61f0(long param_1,undefined8 *param_2,undefined4 param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_80 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_7c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_74; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_70 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = param_1 + 0x108; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004e6e9c(lVar1,auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  thunk_FUN__text__004e6884(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_4 != 0) { // [自动静态注释] 条件判断/分支
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      local_80[0] = 0xff00; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = FUN__text__004e7080(lVar1,local_80,&local_74); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (((uVar3 & 1) == 0) || (param_4 < local_74)) break; // [自动静态注释] 条件判断/分支
      if ((char)local_80[0] == -0x50) { // [自动静态注释] 条件判断/分支
        puVar4 = (undefined8 *)param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar4 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          puVar7 = (undefined8 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            while (((puVar5 = puVar4, *(char *)(puVar5 + 1) != -0x50 || ((char)local_80[0] != -0x50) // [自动静态注释] 循环/迭代
                    ) || (*(char *)((long)puVar5 + 0xc) != local_7c))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              puVar4 = (undefined8 *)puVar5[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              puVar7 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if ((undefined8 *)puVar5[4] == (undefined8 *)0x0) goto LAB__text__004e6254; // [自动静态注释] 条件判断/分支
            } // [自动静态注释] 作用域/控制流边界
            puVar4 = (undefined8 *)puVar5[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar2 = param_2 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if ((undefined8 *)param_2[1] != puVar5) { // [自动静态注释] 条件判断/分支
              puVar2 = puVar7 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            *puVar2 = puVar4;
            if ((undefined8 *)*param_2 == puVar5) { // [自动静态注释] 条件判断/分支
              *param_2 = puVar7;
            } // [自动静态注释] 作用域/控制流边界
            FUN__text__00447104(*puVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
            FUN__text__00400fc0(0,puVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
          } while (puVar4 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
LAB__text__004e6254: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__00446f40(param_1,param_2,local_80,param_3,local_74,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar6 != param_4); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004e6ec0(lVar1,auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


