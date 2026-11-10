/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00338120
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00438120; name: FUN_.text__00438120
 */


void FUN__text__00438120(long *param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((int)param_1[1] == 0) { // [自动静态注释] 条件判断/分支
    bVar1 = *(byte *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar2 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*(char *)(puVar2 + 1) != *(char *)((long)param_1 + 0x11)) { // [自动静态注释] 条件判断/分支
        *(char *)(puVar2 + 1) = *(char *)((long)param_1 + 0x11);
        (**(code **)(*(long *)*puVar2 + 8)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  ((long *)*puVar2,*param_2,param_2[1],param_2 + 2,(long)param_2 + 0x14); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      bVar1 = *(byte *)(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (((bVar1 & 3) == 0) && // [自动静态注释] 循环/迭代
            (puVar2 = puVar2 + 2, // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar2 != (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10))); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if ((bVar1 & 3) == 1) { // [自动静态注释] 条件判断/分支
    *(byte *)(param_1 + 2) = bVar1 & 0xfe;
    local_58 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_50 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = *(undefined4 *)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_44 = *(undefined4 *)((long)param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00438120(param_1,&local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


