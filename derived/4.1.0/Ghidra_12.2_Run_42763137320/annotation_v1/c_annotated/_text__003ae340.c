/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002AE340
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ae340; name: FUN_.text__003ae340
 */


void FUN__text__003ae340(long param_1,undefined4 param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iStack_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((param_3 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003b3200(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  iVar2 = FUN__text__003b7888(*(undefined8 *)(param_1 + 0x800),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(param_1 + 0x8fc) = 0;
  FUN__text__003b9180((float)iVar2,*(undefined8 *)(param_1 + 0x748)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)(param_1 + 0x8fc) = 1;
  uVar3 = FUN__text__003b78c0(*(undefined8 *)(param_1 + 0x800),param_2,iVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__003adcc0(param_1,uVar3,iVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar4 = (undefined8 *)**(long **)(param_1 + 0x788); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)(*(long **)(param_1 + 0x788))[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar4 != puVar1) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if (((*(char *)(puVar4 + 1) == '\0') && // [自动静态注释] 条件判断/分支
          (iStack_3c = *(int *)((long)puVar4 + 0xc), iStack_3c != -1)) && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
         (*(code **)(param_1 + 0xc0) != (code *)0x0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        local_38 = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_40 = *(undefined4 *)(puVar4 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(param_1 + 0xc0))(param_1 + 0xe0,&iStack_3c,&local_38,&local_40); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      puVar4 = puVar4 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar4 != puVar1); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


