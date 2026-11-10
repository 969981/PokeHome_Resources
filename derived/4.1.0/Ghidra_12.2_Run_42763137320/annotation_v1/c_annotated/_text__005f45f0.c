/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F45F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f45f0; name: FUN_.text__005f45f0
 */


undefined8 FUN__text__005f45f0(long *param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)((long)param_1 + 0x114) == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)((long)param_1 + 0x114) = 1;
    cVar1 = *(char *)((long)param_1 + 0xba); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    cVar1 = *(char *)((long)param_1 + 0xba); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar1 != '\0') { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x15) = 1;
    *(undefined4 *)((long)param_1 + 0x114) = 1;
    return 4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  cVar1 = *(char *)((long)param_1 + 0x9e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(char *)((long)param_1 + 0x9e) = cVar1 + '\x01';
  if ((byte)(cVar1 + 1U) <= *(byte *)((long)param_1 + 0x9d)) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)((long)param_1 + 0x9e) = 0;
  uVar2 = FUN__text__005f4cc0(param_1,&local_34); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(char *)((long)param_1 + 0xb9) == '\0') { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_1 + 0x58)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (param_1,uVar2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0));
    (**(code **)(*param_1 + 0x60)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (param_1,uVar2, // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               *(undefined8 *)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0),
               local_34); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((char)param_1[0x17] == '\0') { // [自动静态注释] 条件判断/分支
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    param_1[0x20] = param_1[0x1b]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x21] = param_1[0x1c]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x1d] = param_1[0x18]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x1e] = param_1[0x19]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[0x1f] = param_1[0x1a]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(ushort *)(param_1 + 0x1d) & 0xfffe) == 0xbe00) { // [自动静态注释] 条件判断/分支
      uVar5 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(char *)((long)param_1 + 0x9b) = *(char *)((long)param_1 + 0x9b) + '\x01';
      *(char *)((long)param_1 + 0x9c) = *(char *)((long)param_1 + 0x9c) + '\x01';
      goto LAB__text__005f4784; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    plVar3 = *(long **)(param_1[0xb] + (ulong)*(byte *)((long)param_1 + 0x9f) * 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar3 + 0x158))(plVar3,uVar2,0,local_34); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if ((char)param_1[0x17] == '\0') { // [自动静态注释] 条件判断/分支
      uVar4 = (**(code **)(*param_1 + 0x88))(param_1,param_1 + 0x1d); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar4 & 1) == 0) { // [自动静态注释] 条件判断/分支
        uVar5 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar5 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *param_2 = uVar5;
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005f4784: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *param_2 = 1;
  *(undefined4 *)(param_1 + 0x15) = uVar5;
  *(undefined4 *)((long)param_1 + 0x114) = 1;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


