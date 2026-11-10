/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00304260
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00404260; name: FUN_.text__00404260
 */


void FUN__text__00404260(undefined4 param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_2 + 0xd1c) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00404660(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00402220(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(uint *)(param_3 + 0x2c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 == 1) { // [自动静态注释] 条件判断/分支
    lVar2 = *(long *)(param_2 + 0xbd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(param_2 + 0xbd8) = lVar2 + 1;
    *(long *)(param_2 + lVar2 * 8 + 0xbe0) = param_3;
    if (*(long *)(param_2 + 0xbd8) == 0x20) { // [自动静态注释] 条件判断/分支
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xbe0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xbe8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xbf0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xbf8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc00)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc08)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc10)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc18)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc20)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc28)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc30)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc38)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc40)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc48)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc50)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc58)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc60)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc68)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc70)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc78)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc80)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc88)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc90)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xc98)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xca0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xca8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xcb0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xcb8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xcc0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xcc8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xcd0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00404660(param_1,*(undefined8 *)(param_2 + 0xcd8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined8 *)(param_2 + 0xbd8) = 0;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = param_2 + (ulong)uVar1 * 0x108; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = *(long *)(lVar4 + 0xb18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(lVar4 + 0xb18) = lVar2 + 1;
    ((long *)(lVar4 + 0xb18))[lVar2 + 1] = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = 0x20 - (ulong)(uVar1 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(ulong *)(lVar4 + 0xb18) == uVar3) { // [自动静态注释] 条件判断/分支
      lVar2 = 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar3 < 0x10) { // [自动静态注释] 条件判断/分支
        lVar2 = (uVar3 >> 2) + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar6 = uVar3 - lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar5 = (undefined8 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               ((ulong)uVar1 * 0x108 + (lVar2 + (ulong)(uVar1 >> 1)) * -8 + param_2 + 0xc20); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        FUN__text__00404660(param_1,*puVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar2 = lVar2 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5 = puVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar2 != 0); // [自动静态注释] 循环/迭代
      *(long *)(lVar4 + 0xb18) = lVar6;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


